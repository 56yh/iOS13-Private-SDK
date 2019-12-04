//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAGKStructuredAnswer-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SAGKSummaryStructuredAnswer : AceObject <SAGKStructuredAnswer>
{
}

+ (id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)summaryStructuredAnswer;
@property(copy, nonatomic) NSString *titleAnnotation;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *imageCaption;
@property(copy, nonatomic) NSURL *image;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(copy, nonatomic) NSArray *answerPropertyGroups;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

