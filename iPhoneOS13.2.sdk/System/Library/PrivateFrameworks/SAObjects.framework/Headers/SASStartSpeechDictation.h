//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SASStartSpeech.h>

@class NSArray, NSData, NSString;

@interface SASStartSpeechDictation : SASStartSpeech
{
}

+ (id)startSpeechDictationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeechDictation;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool speakerIndependentRecognition;
@property(copy, nonatomic) NSString *selectedText;
@property(nonatomic) _Bool saveRequestAudio;
@property(copy, nonatomic) NSString *region;
@property(copy, nonatomic) NSString *prefixText;
@property(copy, nonatomic) NSString *postfixText;
@property(copy, nonatomic) NSArray *languages;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *keyboardType;
@property(copy, nonatomic) NSString *keyboardReturnKey;
@property(copy, nonatomic) NSString *keyboardIdentifier;
@property(copy, nonatomic) NSString *interactionId;
@property(copy, nonatomic) NSArray *inlineItemList;
@property(copy, nonatomic) NSString *fieldLabel;
@property(copy, nonatomic) NSString *fieldId;
@property(nonatomic) _Bool censorSpeech;
@property(copy, nonatomic) NSString *applicationVersion;
@property(copy, nonatomic) NSString *applicationName;
@property(copy, nonatomic) NSData *activationToken;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

