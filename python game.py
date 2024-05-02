import random

def jogo_pedra_papel_tesoura(jogador):
    opcoes = ['pedra', 'papel', 'tesoura']
    computador = random.choice(opcoes)

    print(f"Você escolheu: {jogador}")
    print(f"O computador escolheu: {computador}")

    if jogador == computador:
        return "Empate!"
    elif (jogador == 'pedra' and computador == 'tesoura') or (jogador == 'papel' and computador == 'pedra') or (jogador == 'tesoura' and computador == 'papel'):
        return "Você ganhou!"
    else:
        return "Você perdeu!"

def main():
    print("Bem-vindo ao jogo Pedra, Papel e Tesoura!")
    print("Escolha uma opção: pedra, papel ou tesoura.")
    
    jogador = input("Sua escolha: ").lower()
    
    if jogador in ['pedra', 'papel', 'tesoura']:
        resultado = jogo_pedra_papel_tesoura(jogador)
        print(resultado)
    else:
        print("Escolha inválida. Por favor, escolha entre pedra, papel ou tesoura.")

if __name__ == "__main__":
    main()
