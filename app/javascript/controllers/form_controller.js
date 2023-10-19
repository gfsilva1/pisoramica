import { Controller } from "@hotwired/stimulus"
import debounce from "debounce";

// Connects to data-controller="form"
export default class extends Controller {
  connect() {
    console.log("conectado", this.element);
  }

  initialize() {
    console.log("inicializado");
    this.submit = debounce(this.submit.bind(this), 300)
  }

  disconnect() {
    console.log("desconectado");
  }

  submit() {
    this.element.requestSubmit();
  }
}
