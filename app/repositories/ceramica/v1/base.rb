require "json"
require "open-uri"

module Ceramica
  module V1
    class Base
      def self.api
        url = "https://www.ceramicaalmeida.com.br/produtos-por-tipo/ceramica-hd/9"
        ceramica_html = URI.open(url).read
        doc = Nokogiri::HTML.parse(ceramica_html)

        images = doc.search("#produtos .ImageWrapper img").map { |e| e.attribute_nodes[1].value }

        return images
      end
    end
  end
end
