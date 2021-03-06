//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DMaterial.h>

@class NSArray, TSCH3DVector;

__attribute__((visibility("hidden")))
@interface TSCH3DTexturesMaterial : TSCH3DMaterial
{
    TSCH3DVector *_color;
    NSArray *_textures;
    NSArray *_tilings;
}

+ (id)instanceWithArchive:(const struct Chart3DTexturesMaterialArchive )arg1 unarchiver:(id)arg2;
- (void)didInitFromSOS;
- (id)firstTiling;
- (id)firstTexture;
- (id)variableTexture;
- (void)addTexture:(id)arg1 tiling:(id)arg2;
- (id)textureEnumerator;
- (NSUInteger)textureCount;
- (id)tilings;
- (id)textures;
- (BOOL)hasCompleteData;
@property(nonatomic) tvec4_ac57c72d color;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct Chart3DTexturesMaterialArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DTexturesMaterialArchive )arg1 unarchiver:(id)arg2;

@end

