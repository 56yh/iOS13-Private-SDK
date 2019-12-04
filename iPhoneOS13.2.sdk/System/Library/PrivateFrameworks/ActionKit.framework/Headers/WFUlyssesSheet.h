//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

#import <ActionKit/WFNaming-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface WFUlyssesSheet : MTLModel <MTLJSONSerializing, WFNaming, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_text;
    NSArray *_keywords;
    NSArray *_notes;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *notes; // @synthesize notes=_notes;
@property(readonly, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *wfName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

