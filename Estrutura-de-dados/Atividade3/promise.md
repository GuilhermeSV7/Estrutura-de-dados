# Entendendo Promessas em JavaScript

Promessas são uma ferramenta valiosa para lidar com tarefas assíncronas de forma organizada. Elas apresentam três estados: pendente, cumprida e rejeitada.

## Funcionamento Básico

Promessas representam resultados futuros de tarefas assíncronas. Vejamos um exemplo:

```javascript
const minhaPromise = new Promise((resolve, reject) => {
    setTimeout(() => {
        const operacaoSucesso = true;

        if (operacaoSucesso) {
            resolve("Tarefa concluída com êxito!");
        } else {
            reject("Algo deu errado!");
        }
    }, 2000);
});

minhaPromise
    .then(resultado => {
        console.log(resultado); // Ação após cumprimento
    })
    .catch(erro => {
        console.error(erro); // Ação após rejeição
    });
