//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKLocalSearch, NSString;

@interface CalGeocoder : NSObject
{
    NSString *_locationString;
    id /* CDUnknownBlockType */ _completionBlock;
    MKLocalSearch *_search;
}

+ (void)geocodeLocationString:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) MKLocalSearch *search; // @synthesize search=_search;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
// - (void).cxx_destruct;
- (void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)startGeocoding;
- (void)dealloc;
- (id)initWithLocationString:(id)arg1 andCompletionBlock:(id /* CDUnknownBlockType */)arg2;

@end

