//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DStringIndexedResources.h>

@class NSMutableDictionary, TSCH3DTextureAtlas;

__attribute__((visibility("hidden")))
@interface TSCH3DLabelResources : TSCH3DStringIndexedResources
{
    NSMutableDictionary *mCache;
    TSCH3DTextureAtlas *mAtlas;
}

@property(readonly, nonatomic) TSCH3DTextureAtlas *atlas; // @synthesize atlas=mAtlas;
- (id)resourceAtIndex:(const tvec2_3b141483 *)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4;
- (void)setParagraphStyle:(id)arg1 forKey:(unsigned long long)arg2 atIndex:(const tvec2_3b141483 *)arg3;
- (void)setParagraphStyle:(id)arg1 atIndex:(const tvec2_3b141483 *)arg2;
- (id)paragraphStyleForKey:(unsigned long long)arg1 defaultStyle:(id)arg2;
- (id)prepareTextureAtlasWithSamples:(float)arg1;
- (void)dealloc;
- (id)initWithSize:(const tvec2_3b141483 *)arg1;

@end

