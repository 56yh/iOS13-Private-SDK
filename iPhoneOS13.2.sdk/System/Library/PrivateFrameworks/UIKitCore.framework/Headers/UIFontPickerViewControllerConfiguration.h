//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSPredicate, UIColor;

@interface UIFontPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _includeFaces;
    _Bool _displayUsingSystemFont;
    _Bool __hideSearchBar;
    unsigned int _filteredTraits;
    NSPredicate *_filteredLanguagesPredicate;
    UIColor *__tintColor;
}

+ (id)filterPredicateForFilteredLanguages:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // @synthesize _tintColor=__tintColor;
@property(nonatomic, setter=_setHideSearchBar:) _Bool _hideSearchBar; // @synthesize _hideSearchBar=__hideSearchBar;
@property(copy, nonatomic) NSPredicate *filteredLanguagesPredicate; // @synthesize filteredLanguagesPredicate=_filteredLanguagesPredicate;
@property(nonatomic) unsigned int filteredTraits; // @synthesize filteredTraits=_filteredTraits;
@property(nonatomic) _Bool displayUsingSystemFont; // @synthesize displayUsingSystemFont=_displayUsingSystemFont;
@property(nonatomic) _Bool includeFaces; // @synthesize includeFaces=_includeFaces;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

