let $ = document





let template = $.createElement('template')

template.innerHTML = ` 

<link rel="stylesheet" href="component/component.css">

<div class="row flex" id="service-item">
                <div class="col s12 m6 l4">
                    <div class="service-item">
                        <img src="img/service/1.jpg" alt="">
                        <span>
                        <p><slot name="name"> </slot> </p>
                        <p><slot name="price"> </slot> </p>
                        </span>
                    </div>
                </div>
               







<script src="js/jquery-3.5.1.min.js"></script>
<script src="js/all.min.js"></script>
<script src="js/materialize.min.js"></script>

`



export class examples extends HTMLElement {



    constructor() {

        console.log('connected');

        super()

        this.attachShadow({ mode: 'open' })
        this.shadowRoot.appendChild(template.content.cloneNode(true))




    }
    connectedCallback() {

        console.log(this.getAttribute('title'));


    }



    disconnectCallback() {}



}