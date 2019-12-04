//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, TSCH3DVector;

__attribute__((visibility("hidden")))
@interface TSCH3DLight : NSObject <NSCopying>
{
    NSString *_name;
    TSCH3DVector *_ambientColor;
    TSCH3DVector *_diffuseColor;
    TSCH3DVector *_specularColor;
    float _intensity;
    TSCH3DVector *_attenuation;
    int _coordinateSpace;
    _Bool _enabled;
}

+ (id)light;
+ (id)lightClasses;
+     // Error parsing type: @32@0:8r^{Chart3DLightArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DPointLightArchive}^{Chart3DDirectionalLightArchive}^{Chart3DSpotLightArchive}fIB}16@24, name: instanceWithArchive:unarchiver:
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(nonatomic) float intensity; // @synthesize intensity=_intensity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)didInitFromSOS;
- (void)affect:(id)arg1 states:(id)arg2 texturePool:(id)arg3;
@property(nonatomic) tvec3_17f03ce0 attenuation;
@property(nonatomic) tvec4_ac57c72d specularColor;
@property(nonatomic) tvec4_ac57c72d diffuseColor;
@property(nonatomic) tvec4_ac57c72d ambientColor;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
-     // Error parsing type: v32@0:8^{Chart3DLightArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DPointLightArchive}^{Chart3DDirectionalLightArchive}^{Chart3DSpotLightArchive}fIB}16@24, name: saveToLightArchive:archiver:
-     // Error parsing type: v32@0:8^{Chart3DLightArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DPointLightArchive}^{Chart3DDirectionalLightArchive}^{Chart3DSpotLightArchive}fIB}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{Chart3DLightArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DPointLightArchive}^{Chart3DDirectionalLightArchive}^{Chart3DSpotLightArchive}fIB}16@24, name: initWithLightArchive:unarchiver:
-     // Error parsing type: @32@0:8r^{Chart3DLightArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DVectorArchive}^{Chart3DPointLightArchive}^{Chart3DDirectionalLightArchive}^{Chart3DSpotLightArchive}fIB}16@24, name: initWithArchive:unarchiver:

@end

