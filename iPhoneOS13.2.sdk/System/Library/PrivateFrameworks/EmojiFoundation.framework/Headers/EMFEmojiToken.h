//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class EMFEmojiLocaleData, NSArray, NSString;

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding>
{
    struct __EmojiTokenWrapper *_emojiTokenRef;
    _Bool _didFailCEM;
    NSString *_localeIdentifier;
    NSString *_string;
}

+ (id)emojiTokenWithLongCharacter:(unsigned int)arg1 localeData:(id)arg2;
+ (id)emojiTokenWithString:(id)arg1 localeData:(id)arg2;
+ (id)emojiTokensForCEMEmojiTokens:(struct __CFArray *)arg1;
+ (id)emojiTokenWithCEMEmojiToken:(struct __EmojiTokenWrapper *)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
- (id)nameForType:(int)arg1;
- (id)relatedEmojiTokens:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isCommon;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualIgnoringModifiers:(id)arg1;
- (id)copyWithoutModifiers;
- (id)copyWithPresentationStyle:(int)arg1;
- (_Bool)supportsPresentationStyle:(int)arg1;
@property(readonly, nonatomic) int presentationStyle;
@property(readonly, nonatomic) _Bool _shouldHighlightEmoji;
- (id)copyWithSkinToneVariantSpecifier:(id)arg1;
- (id)copyWithSkinToneVariant:(int)arg1;
@property(readonly, copy, nonatomic) NSArray *_skinToneVariantStrings;
@property(readonly, copy, nonatomic) NSArray *skinToneVariants;
@property(readonly, nonatomic) NSArray *skinToneChooserVariants;
@property(readonly, nonatomic) NSArray *skinToneSpecifiers;
@property(readonly, nonatomic) int skinTone;
@property(readonly, nonatomic) _Bool supportsSkinToneVariants;
@property(readonly, nonatomic) EMFEmojiLocaleData *localeData;
@property(readonly, nonatomic) const struct __EmojiTokenWrapper *emojiTokenRef; // @synthesize emojiTokenRef=_emojiTokenRef;
- (void)_createEmojiTokenRefIfNecessary;
@property(readonly, nonatomic) NSString *_baseString;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithString:(id)arg1 localeIdentifier:(id)arg2;
- (id)initWithCEMEmojiToken:(struct __EmojiTokenWrapper *)arg1;

@end

