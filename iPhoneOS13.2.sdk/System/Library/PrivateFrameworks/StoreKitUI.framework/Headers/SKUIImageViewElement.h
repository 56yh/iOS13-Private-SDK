//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElementCacheKey, UIColor;

@interface SKUIImageViewElement : SKUIViewElement
{
    NSString *_alt;
    NSString *_entityResourceName;
    NSURL *_entityURL;
    BOOL _enabled;
    _Bool _hasValidEntityValues;
    SKUIImageViewElementCacheKey *_resourceCacheKey;
    NSString *_resourceName;
    struct CGSize _shadowOffset;
    double _shadowRadius;
    UIColor *_shadowColor;
    struct CGSize _size;
    SKUIImageViewElementCacheKey *_transientResourceCacheKey;
    NSURL *_url;
    float _layerShadowOpacity;
    double _layerShadowRadius;
    struct CGSize _layerShadowOffset;
}

@property(nonatomic) double layerShadowRadius; // @synthesize layerShadowRadius=_layerShadowRadius;
@property(nonatomic) struct CGSize layerShadowOffset; // @synthesize layerShadowOffset=_layerShadowOffset;
@property(nonatomic) float layerShadowOpacity; // @synthesize layerShadowOpacity=_layerShadowOpacity;
@property(readonly, nonatomic) id transientResourceCacheKey; // @synthesize transientResourceCacheKey=_transientResourceCacheKey;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
- (void)_loadEntityValuesIfNeeded;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *resourceName;
- (id)uniquingMapKey;
- (_Bool)rendersWithParallax;
- (_Bool)rendersWithPerspective;
- (long long)pageComponentType;
- (_Bool)isEnabled;
- (void)entityValueProviderDidChange;
- (id)entityValueProperties;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)accessibilityText;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) id resourceCacheKey;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

