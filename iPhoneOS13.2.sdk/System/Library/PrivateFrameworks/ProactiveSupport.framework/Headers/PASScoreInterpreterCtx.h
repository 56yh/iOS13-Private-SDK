//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PASScoreDict;

@interface PASScoreInterpreterCtx : NSObject
{
    unsigned long long stackLen;
    double stack[500];
    PASScoreDict *inputScores;
    PASScoreDict *subscores;
    NSString *intentType;
}

- (id)initWithInputScores:(id)arg1;

@end

