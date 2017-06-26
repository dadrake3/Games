template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; template <> void RegisterClass<Skybox>();
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; template <> void RegisterClass<WheelCollider>();
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; 
class SpriteRenderer; 
class TrailRenderer; template <> void RegisterClass<TrailRenderer>();
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>();
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 91 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. QualitySettings
	RegisterClass<QualitySettings>();
	//6. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. Renderer
	RegisterClass<Renderer>();
	//9. Skybox
	RegisterClass<Skybox>();
	//10. GUILayer
	RegisterClass<GUILayer>();
	//11. Light
	RegisterClass<Light>();
	//12. Mesh
	RegisterClass<Mesh>();
	//13. NamedObject
	RegisterClass<NamedObject>();
	//14. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//15. Shader
	RegisterClass<Shader>();
	//16. Material
	RegisterClass<Material>();
	//17. Sprite
	RegisterClass<Sprite>();
	//18. Texture
	RegisterClass<Texture>();
	//19. Texture2D
	RegisterClass<Texture2D>();
	//20. RenderTexture
	RegisterClass<RenderTexture>();
	//21. Transform
	RegisterClass<Transform>();
	//22. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//23. ParticleSystem
	RegisterClass<ParticleSystem>();
	//24. Rigidbody
	RegisterClass<Rigidbody>();
	//25. Unity::Joint
	RegisterClass<Unity::Joint>();
	//26. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//27. Collider
	RegisterClass<Collider>();
	//28. SphereCollider
	RegisterClass<SphereCollider>();
	//29. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//30. CharacterController
	RegisterClass<CharacterController>();
	//31. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//32. WheelCollider
	RegisterClass<WheelCollider>();
	//33. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//34. AudioClip
	RegisterClass<AudioClip>();
	//35. SampleClip
	RegisterClass<SampleClip>();
	//36. AudioListener
	RegisterClass<AudioListener>();
	//37. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//38. AudioSource
	RegisterClass<AudioSource>();
	//39. Animation
	RegisterClass<Animation>();
	//40. Animator
	RegisterClass<Animator>();
	//41. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//42. GUIElement
	RegisterClass<GUIElement>();
	//43. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//44. UI::Canvas
	RegisterClass<UI::Canvas>();
	//45. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//46. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//47. Collider2D
	RegisterClass<Collider2D>();
	//48. TrailRenderer
	RegisterClass<TrailRenderer>();
	//49. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//50. FlareLayer
	RegisterClass<FlareLayer>();
	//51. PreloadData
	RegisterClass<PreloadData>();
	//52. Cubemap
	RegisterClass<Cubemap>();
	//53. Texture3D
	RegisterClass<Texture3D>();
	//54. Texture2DArray
	RegisterClass<Texture2DArray>();
	//55. MeshFilter
	RegisterClass<MeshFilter>();
	//56. MeshRenderer
	RegisterClass<MeshRenderer>();
	//57. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//58. TimeManager
	RegisterClass<TimeManager>();
	//59. AudioManager
	RegisterClass<AudioManager>();
	//60. InputManager
	RegisterClass<InputManager>();
	//61. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//62. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//63. TextAsset
	RegisterClass<TextAsset>();
	//64. PhysicsManager
	RegisterClass<PhysicsManager>();
	//65. TagManager
	RegisterClass<TagManager>();
	//66. ScriptMapper
	RegisterClass<ScriptMapper>();
	//67. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//68. MonoScript
	RegisterClass<MonoScript>();
	//69. MonoManager
	RegisterClass<MonoManager>();
	//70. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//71. PlayerSettings
	RegisterClass<PlayerSettings>();
	//72. BuildSettings
	RegisterClass<BuildSettings>();
	//73. ResourceManager
	RegisterClass<ResourceManager>();
	//74. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//75. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//76. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//77. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>();
	//78. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//79. LevelGameManager
	RegisterClass<LevelGameManager>();
	//80. MeshCollider
	RegisterClass<MeshCollider>();
	//81. BoxCollider
	RegisterClass<BoxCollider>();
	//82. AnimationClip
	RegisterClass<AnimationClip>();
	//83. Motion
	RegisterClass<Motion>();
	//84. AnimatorController
	RegisterClass<AnimatorController>();
	//85. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//86. RenderSettings
	RegisterClass<RenderSettings>();
	//87. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//88. LightmapSettings
	RegisterClass<LightmapSettings>();
	//89. LightProbes
	RegisterClass<LightProbes>();
	//90. NavMeshSettings
	RegisterClass<NavMeshSettings>();

}
