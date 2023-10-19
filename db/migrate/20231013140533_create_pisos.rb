class CreatePisos < ActiveRecord::Migration[7.0]
  def change
    create_table :pisos do |t|
      t.string :nome
      t.string :tamanho
      t.integer :valor

      t.timestamps
    end
  end
end
