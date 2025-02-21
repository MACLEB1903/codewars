"""

Let's play! You have to return which player won! In case of a draw return Draw!.

Examples(Input1, Input2 --> Output):

"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"


"""

def rps(p1, p2):
    turns = ["rock", "paper", "scissors"]
    
    if p1 == p2:
        return "Draw!"
    
    return f"Player {2 if p2 == turns[(turns.index(p1) + 1) % 3] else 1} won!"