# verificar quem é o candidado mais votado, em caso de empate, retornar o ultimo na ordem alfabetica
# ex: ["Matheus", "Lucas", "Thiago", "Matheus"] => "Matheus"
# ex: ["Thiago", "Lucas", "Thiago", "Matheus", "Matheus"] => "Thiago"


def solution(votes):
    candidatos = {}

    mais_votado = votes[0]
    votos = 1

    for v in votes:
        if v not in candidatos:
            candidatos[v] = 1
        else:
            candidatos[v] += 1

        if candidatos[v] > votos:
            votos = candidatos[v]
            mais_votado = v
        elif candidatos[v] == votos and v > mais_votado:
            mais_votado = v

    return mais_votado

assert solution(["Matheus", "Lucas", "Thiago", "Matheus"]) == "Matheus"
assert solution(["Thiago", "Lucas", "Thiago", "Matheus", "Matheus"]) == "Thiago"
