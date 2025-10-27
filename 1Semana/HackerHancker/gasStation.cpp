

/*
🇧🇷 Tradução para o português
Você tem um carro com um tanque de combustível ilimitado, e o custo para viajar da 
estação i até a próxima estação (i + 1) é cost[i] unidades de combustível.
Você começa a jornada com o tanque vazio em uma das estações de combustível.
Dadas duas listas inteiras, gas e cost, retorne o índice da estação de partida se 
for possível completar uma volta completa no circuito no sentido horário; 
caso contrário, retorne -1.
Se existir uma solução, ela é garantidamente única.

Ex: 01
input: 
        0 1 2 3 4
gas  = [1,2,3,4,5], qtd de estações
        0 1 2 3 4
cost = [3,4,5,1,2]

As estações estão de forma circular.

           O = 1
      -2 /       \ -3
      4 = 5     1 = 2          
      -1 \       / -4
       3 = 4 --  2 = 3
             -5

Tanque vazio no início T = 0
Por onde começar?
Estação 3: T = 0 EST:3 = 4 - 1 + 5 - 2 + 1 - 3 + 2 - 4 + 3 - 5 = 0  
Se não der para completar a volta, retorne -1
*/