//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNObservable;

@interface CNAutocompleteCalendarQueryAssembler : NSObject
{
    CNObservable *_cachedObservable;
    CNObservable *_uncachedObservable;
    CNObservable *_rawCachedObservable;
    CNObservable *_rawUncachedObservable;
}

@property(readonly) CNObservable *rawUncachedObservable; // @synthesize rawUncachedObservable=_rawUncachedObservable;
@property(readonly) CNObservable *rawCachedObservable; // @synthesize rawCachedObservable=_rawCachedObservable;
@property(readonly) CNObservable *uncachedObservable; // @synthesize uncachedObservable=_uncachedObservable;
@property(readonly) CNObservable *cachedObservable; // @synthesize cachedObservable=_cachedObservable;
- (void)assemble;
- (id)description;
- (id)initWithRawCachedObservable:(id)arg1 rawUncachedObservable:(id)arg2;

@end

