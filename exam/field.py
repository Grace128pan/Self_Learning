def print_board(board):
    for row in board:
        print(" | ".join(row))
        print("-" * 9)

def check_winner(board):
    # Check rows
    for row in board:
        if row[0] == row[1] == row[2] and row[0] != ' ':
            return True

    # Check columns
    for col in range(3):
        if board[0][col] == board[1][col] == board[2][col] and board[0][col] != ' ':
            return True

    # Check diagonals
    if board[0][0] == board[1][1] == board[2][2] and board[0][0] != ' ':
        return True
    if board[0][2] == board[1][1] == board[2][0] and board[0][2] != ' ':
        return True

    return False

def is_board_full(board):
    for row in board:
        for cell in row:
            if cell == ' ':
                return False
    return True

def tic_tac_toe():
    board = [[' ' for _ in range(3)] for _ in range(3)]
    print("Welcome to Tic-Tac-Toe!")
    print_board(board)

    while True:
        # Player 1's turn
        while True:
            try:
                row, col, symbol = map(str, input("Player 1 (X), enter your move (row,col,symbol): ").split(','))
                row, col = int(row) - 1, int(col) - 1
                if board[row][col] == ' ':
                    board[row][col] = symbol.upper()
                    break
                else:
                    print("That cell is already taken. Try again.")
            except (ValueError, IndexError):
                print("Invalid input. Please enter row, column, and symbol separated by commas.")

        print_board(board)
        if check_winner(board):
            print("Player 1 wins!")
            break
        elif is_board_full(board):
            print("It's a tie!")
            break

        # Player 2's turn
        while True:
            try:
                row, col, symbol = map(str, input("Player 2 (O), enter your move (row,col,symbol): ").split(','))
                row, col = int(row) - 1, int(col) - 1
                if board[row][col] == ' ':
                    board[row][col] = symbol.upper()
                    break
                else:
                    print("That cell is already taken. Try again.")
            except (ValueError, IndexError):
                print("Invalid input. Please enter row, column, and symbol separated by commas.")

        print_board(board)
        if check_winner(board):
            print("Player 2 wins!")
            break
        elif is_board_full(board):
            print("It's a tie!")
            break

tic_tac_toe()
