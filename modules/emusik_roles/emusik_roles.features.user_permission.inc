<?php
/**
 * @file
 * emusik_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function emusik_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'editor',
      4 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access news feeds.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'super editor',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access similarterms content.
  $permissions['access similarterms content'] = array(
    'name' => 'access similarterms content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'similarterms',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'super editor',
    ),
    'module' => 'user',
  );

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer easy social.
  $permissions['administer easy social'] = array(
    'name' => 'administer easy social',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'easy_social',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
      1 => 'super editor',
    ),
    'module' => 'image',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer metasearch interfaces.
  $permissions['administer metasearch interfaces'] = array(
    'name' => 'administer metasearch interfaces',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mkdru',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer news feeds.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'super editor',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer similarterms content.
  $permissions['administer similarterms content'] = array(
    'name' => 'administer similarterms content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'similarterms',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
      1 => 'super editor',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: administer workbench.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'workbench',
  );

  // Exported permission: assign user roles.
  $permissions['assign user roles'] = array(
    'name' => 'assign user roles',
    'roles' => array(
      0 => 'super editor',
    ),
    'module' => 'emusik_roles',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
      1 => 'super editor',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'user',
  );

  // Exported permission: configure emusik social.
  $permissions['configure emusik social'] = array(
    'name' => 'configure emusik social',
    'roles' => array(
      0 => 'administrator',
      1 => 'super editor',
    ),
    'module' => 'emusik_social',
  );

  // Exported permission: create ding_campaign content.
  $permissions['create ding_campaign content'] = array(
    'name' => 'create ding_campaign content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create ding_event content.
  $permissions['create ding_event content'] = array(
    'name' => 'create ding_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create ding_news content.
  $permissions['create ding_news content'] = array(
    'name' => 'create ding_news content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create ding_page content.
  $permissions['create ding_page content'] = array(
    'name' => 'create ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create emusik_playlist content.
  $permissions['create emusik_playlist content'] = array(
    'name' => 'create emusik_playlist content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create metasearch interface.
  $permissions['create metasearch interface'] = array(
    'name' => 'create metasearch interface',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mkdru',
  );

  // Exported permission: create mkdru content.
  $permissions['create mkdru content'] = array(
    'name' => 'create mkdru content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any ding_campaign content.
  $permissions['delete any ding_campaign content'] = array(
    'name' => 'delete any ding_campaign content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ding_event content.
  $permissions['delete any ding_event content'] = array(
    'name' => 'delete any ding_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ding_news content.
  $permissions['delete any ding_news content'] = array(
    'name' => 'delete any ding_news content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ding_page content.
  $permissions['delete any ding_page content'] = array(
    'name' => 'delete any ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any emusik_playlist content.
  $permissions['delete any emusik_playlist content'] = array(
    'name' => 'delete any emusik_playlist content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any mkdru content.
  $permissions['delete any mkdru content'] = array(
    'name' => 'delete any mkdru content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ding_campaign content.
  $permissions['delete own ding_campaign content'] = array(
    'name' => 'delete own ding_campaign content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ding_event content.
  $permissions['delete own ding_event content'] = array(
    'name' => 'delete own ding_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ding_news content.
  $permissions['delete own ding_news content'] = array(
    'name' => 'delete own ding_news content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ding_page content.
  $permissions['delete own ding_page content'] = array(
    'name' => 'delete own ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own emusik_playlist content.
  $permissions['delete own emusik_playlist content'] = array(
    'name' => 'delete own emusik_playlist content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own mkdru content.
  $permissions['delete own mkdru content'] = array(
    'name' => 'delete own mkdru content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 6.
  $permissions['delete terms in 6'] = array(
    'name' => 'delete terms in 6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any ding_campaign content.
  $permissions['edit any ding_campaign content'] = array(
    'name' => 'edit any ding_campaign content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ding_event content.
  $permissions['edit any ding_event content'] = array(
    'name' => 'edit any ding_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ding_news content.
  $permissions['edit any ding_news content'] = array(
    'name' => 'edit any ding_news content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ding_page content.
  $permissions['edit any ding_page content'] = array(
    'name' => 'edit any ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any emusik_playlist content.
  $permissions['edit any emusik_playlist content'] = array(
    'name' => 'edit any emusik_playlist content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any metasearch interface.
  $permissions['edit any metasearch interface'] = array(
    'name' => 'edit any metasearch interface',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mkdru',
  );

  // Exported permission: edit any mkdru content.
  $permissions['edit any mkdru content'] = array(
    'name' => 'edit any mkdru content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own ding_campaign content.
  $permissions['edit own ding_campaign content'] = array(
    'name' => 'edit own ding_campaign content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ding_event content.
  $permissions['edit own ding_event content'] = array(
    'name' => 'edit own ding_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ding_news content.
  $permissions['edit own ding_news content'] = array(
    'name' => 'edit own ding_news content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ding_page content.
  $permissions['edit own ding_page content'] = array(
    'name' => 'edit own ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own emusik_playlist content.
  $permissions['edit own emusik_playlist content'] = array(
    'name' => 'edit own emusik_playlist content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own metasearch interface.
  $permissions['edit own metasearch interface'] = array(
    'name' => 'edit own metasearch interface',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mkdru',
  );

  // Exported permission: edit own mkdru content.
  $permissions['edit own mkdru content'] = array(
    'name' => 'edit own mkdru content',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 6.
  $permissions['edit terms in 6'] = array(
    'name' => 'edit terms in 6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'locale',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: use easy social wizard.
  $permissions['use easy social wizard'] = array(
    'name' => 'use easy social wizard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'easy_social',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format ding_wysiwyg.
  $permissions['use text format ding_wysiwyg'] = array(
    'name' => 'use text format ding_wysiwyg',
    'roles' => array(
      0 => 'editor',
      1 => 'super editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'super editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
      1 => 'super editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
