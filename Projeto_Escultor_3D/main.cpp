#include "Sculptor.h" // Inclui o cabeçalho da classe Sculptor

int main(){
      Sculptor ana(12,12,18); //12 de comprimento, 12 de profundidade e 18 de altura

      //CABELO
      ana.setColor(0.662,125,0.756,1.0); //Cor roxa
      // Insere blocos utilizando coordenadas (x0, x1, y0, y1, z0, z1)
      ana.putBox(3,3,3,10,8,16);
      ana.putBox(3,10,3,10,16,17);
      ana.putBox(10,10,3,10,8,16);
      ana.putBox(3,10,10,10,6,16);
      ana.putBox(4,9,10,10,5,5);
      ana.putBox(5,8,10,10,4,4);
      ana.putBox(4,5,3,3,14,15);
      // Insere voxels utilizando coordenadas (x,y,z)
      ana.putVoxel(6,3,15);
      ana.putVoxel(9,3,15);
      ana.putVoxel(3,9,7);
      ana.putVoxel(10,9,7);

      //PELE
      ana.setColor(0.937, 0.768, 0.454, 1.0); //Cor salmão claro
      // Insere blocos utilizando coordenadas (x0, x1, y0, y1, z0, z1)
      ana.putBox(4,9,4,9,10,15);
      ana.putBox(4,5,6,7,2,2);
      ana.putBox(8,9,6,7,2,2);
      ana.putBox(3,3,6,7,6,8);
      ana.putBox(10,10,6,7,6,8);

      //OLHOS, BOCA E SAPATOS
      ana.setColor(0.0, 0.0, 0.0, 1.0); //Cor preta
      // Insere voxels utilizando coordenadas (x,y,z)
      ana.putVoxel(5,4,13);
      ana.putVoxel(8,4,13);
      ana.putVoxel(6,4,12);
      ana.putVoxel(7,4,12);
      // Insere blocos utilizando coordenadas (x0, x1, y0, y1, z0, z1)
      ana.putBox(4,5,6,7,1,1);
      ana.putBox(8,9,6,7,1,1);
      ana.putBox(3,3,6,7,5,5);
      ana.putBox(10,10,6,7,5,5);

      //ROUPA
      ana.setColor(0.772, 0.365, 0.843, 1.0); //Cor rosa
      // Insere blocos utilizando coordenadas (x0, x1, y0, y1, z0, z1)
      ana.putBox(4,9,4,9,3,9);
      ana.putBox(3,3,5,8,3,4);
      ana.putBox(10,10,5,8,3,4);
      // Retira voxels utilizando coordenadas (x,y,z)
      ana.cutVoxel(3,3,17);
      ana.cutVoxel(3,3,8);
      ana.cutVoxel(3,10,17);
      ana.cutVoxel(10,3,17);
      ana.cutVoxel(10,3,8);
      ana.cutVoxel(10,10,17);

      // Cria arquivo .off
      ana.writeOFF("Ana.off");

  return 0;
}
