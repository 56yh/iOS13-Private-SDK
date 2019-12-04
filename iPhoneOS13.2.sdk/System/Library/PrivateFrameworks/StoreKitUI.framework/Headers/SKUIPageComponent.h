//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SSMetricsEventFieldProvider-Protocol.h>

@class NSString, SKUIViewElement;

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider>
{
    long long _metricsLocationPosition;
    SKUIViewElement *_viewElement;
}

@property(readonly, nonatomic) SKUIViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic, setter=_setMetricsLocationPosition:) long long metricsLocationPosition; // @synthesize metricsLocationPosition=_metricsLocationPosition;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)valueForMetricsField:(id)arg1;
@property(readonly, nonatomic) NSString *metricsElementName;
@property(readonly, nonatomic, getter=isMissingItemData) _Bool missingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
@property(readonly, nonatomic) long long componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

