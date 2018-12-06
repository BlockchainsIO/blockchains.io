---
layout: contentpage_amp
---
<div>
Languages:
<ul>
{% for lang in site.data.lang.all %}
  <li>
    <img src='{{site.static_url}}/lang/{{ lang.code}}.png'>
    <a href="/{{ lang.code }}">
      {{ lang.name }}
    </a>
  </li>
{% endfor %}
</ul>
</div>
