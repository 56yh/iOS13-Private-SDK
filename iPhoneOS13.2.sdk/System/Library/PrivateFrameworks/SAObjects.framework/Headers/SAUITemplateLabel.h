//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, SAUITemplateAttributedString;

@interface SAUITemplateLabel : SAUITemplateBaseItem
{
}

+ (id)labelWithDictionary:(id)arg1 context:(id)arg2;
+ (id)label;
@property(retain, nonatomic) SAUITemplateAttributedString *text;
@property(copy, nonatomic) NSDictionary *attributedTexts;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

