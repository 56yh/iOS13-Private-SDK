//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface AFSpeechToken : NSObject <NSSecureCoding>
{
    _Bool _removeSpaceBefore;
    _Bool _removeSpaceAfter;
    NSString *_text;
    NSString *_phoneSequence;
    NSString *_ipaPhoneSequence;
    long long _confidenceScore;
    double _startTime;
    double _silenceStartTime;
    double _endTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property(nonatomic) _Bool removeSpaceBefore; // @synthesize removeSpaceBefore=_removeSpaceBefore;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double silenceStartTime; // @synthesize silenceStartTime=_silenceStartTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(copy, nonatomic) NSString *ipaPhoneSequence; // @synthesize ipaPhoneSequence=_ipaPhoneSequence;
@property(copy, nonatomic) NSString *phoneSequence; // @synthesize phoneSequence=_phoneSequence;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)aceToken;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

