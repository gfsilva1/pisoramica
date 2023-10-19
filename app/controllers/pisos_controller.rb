class PisosController < ApplicationController
  def home
  end

  def index
    @pisos = Ceramica::V1::CeramicaRepository.call
  end

  def show
    @piso = Piso.find(params[:id])
  end

  def new
    @piso = Piso.new
  end

  def create
    @piso = Piso.new(piso_params)
    @piso.save
    redirect_to pisos_path
  end

  def edit
    @piso = Piso.find(params[:id])
  end

  def destroy
    @piso = Piso.find(params[:id])
    @piso.destroy
    redirect_to pisos_path
  end




private

  def piso_params
    params.require(:piso).permit(:nome, :tamanho, :valor, :prazo, :photo)
  end



end
