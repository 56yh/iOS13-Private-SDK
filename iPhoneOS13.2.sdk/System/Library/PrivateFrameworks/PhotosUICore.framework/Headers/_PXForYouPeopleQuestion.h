//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHPerson;

@interface _PXForYouPeopleQuestion : NSObject
{
    long long _questionType;
    PHPerson *_targetPerson;
}

@property(readonly, nonatomic) PHPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
@property(readonly, nonatomic) long long questionType; // @synthesize questionType=_questionType;
- (id)initWithQuestionType:(long long)arg1 targetPerson:(id)arg2;

@end

