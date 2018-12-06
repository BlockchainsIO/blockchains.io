{%- if page.components -%}
{%- for c in page.components -%}
  {%- case c -%}
    {%- when 'carousel' -%}
    <script async custom-element="amp-carousel" src="https://cdn.ampproject.org/v0/amp-carousel-0.1.js"></script>
    {%- when 'lightbox' -%}
    <script async custom-element="amp-lightbox" src="https://cdn.ampproject.org/v0/amp-lightbox-0.1.js"></script>
    {%- when 'youtube' -%}
    <script async custom-element="amp-youtube" src="https://cdn.ampproject.org/v0/amp-youtube-0.1.js"></script>
  {%- endcase -%}
{%- endfor -%}
{%- endif -%}
<script async custom-element="amp-sidebar" src="https://cdn.ampproject.org/v0/amp-sidebar-0.1.js"></script>
