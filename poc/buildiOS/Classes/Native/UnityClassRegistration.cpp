struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 70 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//4. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//5. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//6. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//18. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//19. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//20. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//21. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//22. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//23. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//24. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//25. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//26. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//27. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//28. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//29. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//30. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//31. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//32. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//33. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//34. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//35. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//36. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//37. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//38. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//39. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//40. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//41. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//42. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//43. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//44. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//45. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//46. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//47. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//48. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//49. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//50. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//51. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//52. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//53. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//54. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//55. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//56. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//57. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//58. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//59. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//60. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//61. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//62. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//63. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//64. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//65. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//66. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//67. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//68. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//69. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
