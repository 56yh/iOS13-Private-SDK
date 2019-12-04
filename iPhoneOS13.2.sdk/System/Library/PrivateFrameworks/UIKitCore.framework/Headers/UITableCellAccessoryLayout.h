//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICellAccessoryLayout-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, UICellAccessoryManager;

__attribute__((visibility("hidden")))
@interface UITableCellAccessoryLayout : NSObject <UICellAccessoryLayout>
{
    UICellAccessoryManager *_manager;
    unsigned long long _edge;
    double _safeAreaInset;
    double _minimumCompressionLayoutWidth;
    id /* block */ _spacingBlock;
    NSDictionary *_initialFrames;
    NSDictionary *_finalFrames;
    NSMutableDictionary *_initialAlphas;
    NSMutableDictionary *_finalAlphas;
    struct CGRect _totalFrame;
}

@property(retain, nonatomic) NSMutableDictionary *finalAlphas; // @synthesize finalAlphas=_finalAlphas;
@property(retain, nonatomic) NSMutableDictionary *initialAlphas; // @synthesize initialAlphas=_initialAlphas;
@property(retain, nonatomic) NSDictionary *finalFrames; // @synthesize finalFrames=_finalFrames;
@property(retain, nonatomic) NSDictionary *initialFrames; // @synthesize initialFrames=_initialFrames;
@property(nonatomic) struct CGRect totalFrame; // @synthesize totalFrame=_totalFrame;
@property(copy, nonatomic) id /* block */ spacingBlock; // @synthesize spacingBlock=_spacingBlock;
@property(nonatomic) double minimumCompressionLayoutWidth; // @synthesize minimumCompressionLayoutWidth=_minimumCompressionLayoutWidth;
@property(nonatomic) double safeAreaInset; // @synthesize safeAreaInset=_safeAreaInset;
@property(nonatomic) unsigned long long edge; // @synthesize edge=_edge;
@property(nonatomic) __weak UICellAccessoryManager *manager; // @synthesize manager=_manager;
- (struct CGRect)endLayout;
- (double)finalAlphaForAccessory:(id)arg1;
- (double)initialAlphaForAccessory:(id)arg1;
- (struct CGRect)finalFrameForAccessory:(id)arg1;
- (struct CGRect)initialFrameForAccessory:(id)arg1;
- (void)prepareLayoutForAccessories:(id)arg1 previousAccessories:(id)arg2 configurationIdentifier:(id)arg3;
- (id)_framesForAccessories:(id)arg1 withContainerSize:(struct CGSize)arg2 outTotalFrame:(struct CGRect *)arg3;
- (struct CGRect)_frameForAccessoryAtIndex:(unsigned long long)arg1 inAccessories:(id)arg2 containerSize:(struct CGSize)arg3 withXOrigin:(double *)arg4;
- (double)_totalWidthForAccessories:(id)arg1 withContainerSize:(struct CGSize)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

