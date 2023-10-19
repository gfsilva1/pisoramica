module Ceramica
  module V1
    class CeramicaRepository < Base
      class << self
        def call
          response = api
        end
      end
    end
  end
end
  