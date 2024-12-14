#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //Declaração de variáveis.
    int qtd, ID, qtd_administrativo=0, qtd_engRedes=0, qtd_engEletricista=0, maior_mediaID;
    double salario, maior_media, media_administrativo=0, media_engRedes=0, media_engEletricista=0;
    string nome_maiorMedia;

    cin >> qtd;

    //Loop para somar os salários de um mesmo cargo e saber quantos apareceram.
    for(int i=0;i<qtd;i++){
        cin >> ID >> salario;

        switch(ID){
            case 1:
                qtd_administrativo += 1;
                media_administrativo += salario;
                break;
            case 2:
                qtd_engRedes += 1;
                media_engRedes += salario;
                break;
            case 3:
                qtd_engEletricista += 1;
                media_engEletricista += salario;
                break;
        }
    }
    //Cálculo da média dos salários de cada cargo.
    media_administrativo /= qtd_administrativo;
    media_engRedes /= qtd_engRedes;
    media_engEletricista /= qtd_engEletricista;

    //Verifica qual média salarial é maior.
    if(media_administrativo >= media_engRedes && media_administrativo >= media_engEletricista){
        maior_media = media_administrativo;
        maior_mediaID = 1;
        nome_maiorMedia = "Administrativo";
    }
    else if(media_engRedes >= media_administrativo && media_engRedes >= media_engEletricista){
        maior_media = media_engRedes;
        maior_mediaID = 2;
        nome_maiorMedia = "Engenheiro de Redes";
    }
    else{
        maior_media = media_engEletricista;
        maior_mediaID = 3;
        nome_maiorMedia = "Engenheiro Eletricista";
    }
    //Apresentação de cada categoria e sua respectiva média salarial.
    cout << fixed << setprecision(2) << endl;
    cout << "Media salarial de cada categoria:" << endl;
    cout << "Administrativo: R$ " << media_administrativo << endl;
    cout << "Engenheiro de Redes: R$ " << media_engRedes << endl;
    cout << "Engenheiro Eletricista: R$ " << media_engEletricista << endl;
    cout << "ID da categoria com maior media salarial: " << maior_mediaID << endl;
    cout << "Nome da categoria com maior media salarial: "  << nome_maiorMedia << endl;
    cout << "Media: R$ " << maior_media << endl;

    return 0;
}