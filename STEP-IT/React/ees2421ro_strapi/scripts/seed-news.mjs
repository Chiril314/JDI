const BASE_URL = "http://localhost:1337";
const EMAIL = "petergriffin@gmail.com";
const PASSWORD = "Petter1!";

const categories = [
  {
    name_ro: "Actualitate",
    name_ru: "Новости",
    name_en: "News",
  },
  {
    name_ro: "Sport",
    name_ru: "Спорт",
    name_en: "Sports",
  },
  {
    name_ro: "Tehnologie",
    name_ru: "Технологии",
    name_en: "Technology",
  },
];

const posts = [
  {
    slug: "locuinte-mai-scumpe-romania-2026",
    category: "Actualitate",
    title_ro: "Locuințele s-au scumpit, iar cumpărătorii sunt mai prudenți",
    title_ru: "Жилье подорожало, а покупатели стали осторожнее",
    title_en: "Home prices rise while buyers become more cautious",
    description_ro:
      "În România, prețurile locuințelor au continuat să crească în prima parte a anului 2026, iar tranzacțiile au scăzut. În București, locuințele noi au avut creșteri importante de preț, în timp ce mulți cumpărători așteaptă oferte mai bune sau o clarificare a situației economice. Sursa: Digi24, 17.05.2026.",
    description_ru:
      "В Румынии цены на жилье продолжили расти в первой части 2026 года, а количество сделок снизилось. В Бухаресте особенно подорожали новые квартиры, поэтому многие покупатели ждут более выгодных предложений или более ясной экономической ситуации. Источник: Digi24, 17.05.2026.",
    description_en:
      "In Romania, home prices continued to rise in the first part of 2026 while transactions fell. In Bucharest, new apartments saw major price increases, and many buyers are waiting for better offers or a clearer economic outlook. Source: Digi24, 17.05.2026.",
    author: "Digi24",
    published_date: "2026-05-17",
    is_featured: true,
  },
  {
    slug: "spital-stei-suspiciune-hantavirus",
    category: "Actualitate",
    title_ro: "Spitalul Ștei a luat măsuri după suspiciunea de hantavirus",
    title_ru: "Больница Штей приняла меры после подозрения на хантавирус",
    title_en: "Ștei hospital takes measures after suspected hantavirus case",
    description_ro:
      "Conducerea Spitalului de Psihiatrie și pentru Măsuri de Siguranță Ștei a explicat ce măsuri au fost luate după apariția unei suspiciuni de hantavirus la un pacient. Managerul unității a precizat că pacientul fusese externat și transportat acasă pe 6 mai. Sursa: Digi24, 16.05.2026.",
    description_ru:
      "Руководство психиатрической больницы Штей сообщило, какие меры были приняты после подозрения на хантавирус у одного из пациентов. По словам менеджера учреждения, пациент был выписан и доставлен домой 6 мая. Источник: Digi24, 16.05.2026.",
    description_en:
      "The management of the Ștei psychiatric hospital explained the measures taken after a patient was suspected of having hantavirus. The hospital manager said the patient had been discharged and transported home on May 6. Source: Digi24, 16.05.2026.",
    author: "Digi24",
    published_date: "2026-05-16",
    is_featured: false,
  },
  {
    slug: "sorana-cirstea-semifinale-roma",
    category: "Sport",
    title_ro: "Sorana Cîrstea s-a calificat în semifinalele turneului WTA Roma",
    title_ru: "Сорана Кырстя вышла в полуфинал турнира WTA в Риме",
    title_en: "Sorana Cîrstea reaches the WTA Rome semifinals",
    description_ro:
      "Sorana Cîrstea a învins-o pe Jelena Ostapenko în sferturile turneului WTA 1000 de la Roma, cu 6-1 și 7-6. Rezultatul a venit după o victorie importantă obținută anterior împotriva Arynei Sabalenka. Sursa: Digi24, 12.05.2026.",
    description_ru:
      "Сорана Кырстя победила Елену Остапенко в четвертьфинале турнира WTA 1000 в Риме со счетом 6:1, 7:6. Этот результат последовал после важной победы над Ариной Сабаленкой. Источник: Digi24, 12.05.2026.",
    description_en:
      "Sorana Cîrstea defeated Jelena Ostapenko in the WTA 1000 Rome quarterfinals, 6-1, 7-6. The result followed an important earlier win against Aryna Sabalenka. Source: Digi24, 12.05.2026.",
    author: "Digi24 / Digi Sport",
    published_date: "2026-05-12",
    is_featured: true,
  },
  {
    slug: "cristi-chivu-cupa-italiei-inter",
    category: "Sport",
    title_ro: "Cristi Chivu a câștigat Cupa Italiei cu Inter",
    title_ru: "Кристи Киву выиграл Кубок Италии с «Интером»",
    title_en: "Cristi Chivu wins the Italian Cup with Inter",
    description_ro:
      "Cristian Chivu a câștigat Cupa Italiei cu Internazionale Milano, după ce echipa sa trecuse deja de un sezon excelent în Serie A. Finala cu Lazio a fost decisă de goluri marcate în prima repriză. Sursa: Digi24, 14.05.2026.",
    description_ru:
      "Кристиан Киву выиграл Кубок Италии с миланским «Интером» после сильного сезона в Серии A. Финал против «Лацио» был решен голами, забитыми в первом тайме. Источник: Digi24, 14.05.2026.",
    description_en:
      "Cristian Chivu won the Italian Cup with Inter Milan after an excellent Serie A season. The final against Lazio was decided by goals scored in the first half. Source: Digi24, 14.05.2026.",
    author: "Digi24 / Digi Sport",
    published_date: "2026-05-14",
    is_featured: false,
  },
  {
    slug: "spacex-listare-nasdaq-iunie",
    category: "Tehnologie",
    title_ro: "SpaceX pregătește o posibilă listare istorică pe Nasdaq",
    title_ru: "SpaceX готовит возможное историческое размещение на Nasdaq",
    title_en: "SpaceX prepares a possible historic Nasdaq listing",
    description_ro:
      "SpaceX, compania fondată de Elon Musk, ar putea debuta pe Nasdaq în iunie, potrivit unor surse citate de Reuters. Oferta publică inițială ar putea deveni una dintre cele mai mari listări bursiere din istorie. Sursa: Digi24 / Reuters, 15.05.2026.",
    description_ru:
      "SpaceX, компания Илона Маска, может выйти на Nasdaq в июне, сообщили источники Reuters. Первичное размещение акций может стать одним из крупнейших в истории фондового рынка. Источник: Digi24 / Reuters, 15.05.2026.",
    description_en:
      "SpaceX, the company founded by Elon Musk, could debut on Nasdaq in June, according to sources cited by Reuters. The IPO could become one of the largest stock market listings in history. Source: Digi24 / Reuters, 15.05.2026.",
    author: "Digi24 / Reuters",
    published_date: "2026-05-15",
    is_featured: true,
  },
  {
    slug: "platforma-europeana-eyou-lansare",
    category: "Tehnologie",
    title_ro: "Platforma europeană eYou a fost lansată oficial",
    title_ru: "Европейская платформа eYou официально запущена",
    title_en: "European platform eYou officially launches",
    description_ro:
      "Platforma europeană de social media eYou, cu doi cofondatori stabiliți în România, a fost lansată oficial. Serviciul promite verificarea postărilor în timp real, algoritmi mai transparenți și mai mult control pentru utilizatori. Sursa: Digi24, 05.05.2026.",
    description_ru:
      "Европейская социальная платформа eYou, основанная при участии двух предпринимателей, живущих в Румынии, была официально запущена. Сервис обещает проверку публикаций в реальном времени, более прозрачные алгоритмы и больший контроль для пользователей. Источник: Digi24, 05.05.2026.",
    description_en:
      "The European social media platform eYou, co-founded by two entrepreneurs based in Romania, has officially launched. The service promises real-time post verification, more transparent algorithms, and greater user control. Source: Digi24, 05.05.2026.",
    author: "Digi24",
    published_date: "2026-05-05",
    is_featured: false,
  },
];

async function request(path, options = {}) {
  const response = await fetch(`${BASE_URL}${path}`, {
    ...options,
    headers: {
      "Content-Type": "application/json",
      ...(options.headers || {}),
    },
  });

  const text = await response.text();
  const data = text ? JSON.parse(text) : null;

  if (!response.ok) {
    throw new Error(`${options.method || "GET"} ${path} failed: ${response.status} ${text}`);
  }

  return data;
}

async function login() {
  const response = await request("/admin/login", {
    method: "POST",
    body: JSON.stringify({ email: EMAIL, password: PASSWORD }),
  });

  return response.data.token;
}

async function publishEntry(token, uid, documentId, body) {
  const path = documentId
    ? `/content-manager/collection-types/${uid}/${documentId}/actions/publish`
    : `/content-manager/collection-types/${uid}/actions/publish`;

  const response = await request(path, {
    method: "POST",
    headers: { Authorization: `Bearer ${token}` },
    body: JSON.stringify(body),
  });

  return response.data;
}

async function listEntries(token, uid) {
  const response = await request(`/content-manager/collection-types/${uid}?page=1&pageSize=100`, {
    headers: { Authorization: `Bearer ${token}` },
  });

  return response.results || [];
}

async function seedCategories(token) {
  const existing = await listEntries(token, "api::category.category");
  const byName = new Map(existing.map((entry) => [entry.name_ro, entry]));
  const result = [];

  for (const [index, category] of categories.entries()) {
    const reusable = byName.get(category.name_ro) || existing[index];
    const saved = await publishEntry(
      token,
      "api::category.category",
      reusable?.documentId,
      category
    );
    result.push(saved);
  }

  return result;
}

async function seedPosts(token, savedCategories) {
  const existingPosts = await listEntries(token, "api::post.post");
  const bySlug = new Map(existingPosts.map((entry) => [entry.slug, entry]));
  const categoryByName = new Map(savedCategories.map((category) => [category.name_ro, category]));
  const result = [];

  for (const [index, post] of posts.entries()) {
    const category = categoryByName.get(post.category);
    const existing = bySlug.get(post.slug) || existingPosts[index];
    const { category: _categoryName, ...data } = post;

    const saved = await publishEntry(token, "api::post.post", existing?.documentId, {
      ...data,
      category: {
        connect: [{ documentId: category.documentId }],
      },
    });

    result.push(saved);
  }

  return result;
}

function enablePermission(permissions, type, controller, action) {
  if (permissions?.[type]?.controllers?.[controller]?.[action]) {
    permissions[type].controllers[controller][action].enabled = true;
  }
}

async function enablePublicApi(token) {
  const rolesResponse = await request("/users-permissions/roles", {
    headers: { Authorization: `Bearer ${token}` },
  });
  const publicRole = rolesResponse.roles.find((role) => role.type === "public");
  const roleResponse = await request(`/users-permissions/roles/${publicRole.id}`, {
    headers: { Authorization: `Bearer ${token}` },
  });

  const role = roleResponse.role;

  for (const action of ["find", "findOne"]) {
    enablePermission(role.permissions, "api::category", "category", action);
    enablePermission(role.permissions, "api::post", "post", action);
  }

  await request(`/users-permissions/roles/${publicRole.id}`, {
    method: "PUT",
    headers: { Authorization: `Bearer ${token}` },
    body: JSON.stringify({
      name: role.name,
      description: role.description,
      permissions: role.permissions,
    }),
  });
}

const token = await login();
const savedCategories = await seedCategories(token);
const savedPosts = await seedPosts(token, savedCategories);
await enablePublicApi(token);

console.log(`Seed complet: ${savedCategories.length} categorii, ${savedPosts.length} stiri reale.`);
console.log("API categorii: http://localhost:1337/api/categories?populate=posts");
console.log("API stiri: http://localhost:1337/api/posts?populate=category");
