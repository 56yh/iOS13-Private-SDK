//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailFoundation/EFObservable.h>

@class NSArray;

@interface _EFCombineLatestObservable : EFObservable
{
    NSArray *_observables;
}

@property(copy, nonatomic) NSArray *observables; // @synthesize observables=_observables;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;

@end

