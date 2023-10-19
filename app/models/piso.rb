class Piso < ApplicationRecord
  validates :nome, presence: true
  validates :tamanho, presence: true
  validates :valor, presence: true
end
