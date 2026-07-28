import requests
from bs4 import BeautifulSoup


def print_secret_message(url: str):
    response = requests.get(url)
    response.raise_for_status()
    soup = BeautifulSoup(response.text, "html.parser")

    table = soup.find("table")
    if table is None:
        raise Exception("No table found.")
    cells = []
    rows = table.find_all("tr")

    for row in rows[1:]:
        cols = row.find_all("td")
        if len(cols) != 3:
            continue
        x = int(cols[0].get_text(strip=True))
        character = cols[1].get_text(strip=False)
        if character == "":
            character = " "
        y = int(cols[2].get_text(strip=True))
        cells.append((x, y, character))
    if not cells:
        return
    max_x = max(x for x, _, _ in cells)
    max_y = max(y for _, y, _ in cells)
    grid = [
        [" " for _ in range(max_x + 1)]
        for _ in range(max_y + 1)
    ]
    for x, y, ch in cells:
        grid[y][x] = ch
    for row in grid:
        print("".join(row))
if __name__ == "__main__":
    url = input("Google Doc URL: ")
    print_secret_message(url)