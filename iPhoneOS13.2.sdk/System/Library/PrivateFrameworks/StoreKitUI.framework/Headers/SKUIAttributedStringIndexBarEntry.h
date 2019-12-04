//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIIndexBarEntry.h>

@class NSAttributedString, NSDictionary;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry
{
    _Bool _hasValidSynthesizedAttributedString;
    NSAttributedString *_synthesizedAttributedString;
    NSAttributedString *_attributedString;
    NSDictionary *_defaultTextAttributes;
}

@property(copy, nonatomic) NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)_synthesizedAttributedString;
- (void)_invalidateSynthesizedAttributedString;
- (id)entryAttributedString;
- (void)_tintColorDidChange;
- (void)_drawContentInRect:(struct CGRect)arg1;
- (struct CGSize)_calculatedContentSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAttributedString:(id)arg1;

@end

