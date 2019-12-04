//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSAttributedString, NSString, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIBadgeViewElement : SKUIViewElement
{
    UIImage *_fallbackImage;
    _Bool _hasValidFallbackImage;
    NSString *_resourceName;
    struct CGSize _size;
    NSString *_text;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property(readonly, nonatomic) UIImage *fallbackImage; // @synthesize fallbackImage=_fallbackImage;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)accessibilityText;
@property(readonly, nonatomic) long long badgeType;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

