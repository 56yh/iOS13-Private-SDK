//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate;

@interface TISKCandidateAcceptEvent : TISKEvent
{
    TIKeyboardCandidate *_candidate;
}

@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (void)reportToSession:(id)arg1;
- (id)description;
- (id)init:(id)arg1 order:(long long)arg2;

@end

