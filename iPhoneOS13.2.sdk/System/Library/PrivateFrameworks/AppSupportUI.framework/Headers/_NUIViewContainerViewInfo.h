//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NUIViewContainerViewInfo : NSObject
{
    struct nui_size_cache _sizeCache;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    struct UIEdgeInsets _alignmentInsets;
    CDStruct_6c92d79e _baselines;
    struct {
        unsigned int alsoInvalidateSuperview:1;
        unsigned int alignmentInsetsAreCustom:1;
        unsigned int topBaselineIsCustom:1;
        unsigned int bottomBaselineIsCustom:1;
    } _flags;
}

- (id).cxx_construct;
- (void)resetCaches;
- (id)init;

@end

