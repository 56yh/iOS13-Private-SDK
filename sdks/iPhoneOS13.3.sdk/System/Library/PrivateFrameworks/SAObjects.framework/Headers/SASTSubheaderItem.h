//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class SAUIDecoratedText;

@interface SASTSubheaderItem : AceObject <SASTTemplateItem>
{
}

+ (id)subheaderItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)subheaderItem;
@property(retain, nonatomic) SAUIDecoratedText *rightText;
@property(retain, nonatomic) SAUIDecoratedText *leftText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

