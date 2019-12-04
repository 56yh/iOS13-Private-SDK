//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUICore/_SUICEditScriptData-Protocol.h>

@class NSArray, NSString;

@interface _SUICEditScriptDataArray : NSObject <_SUICEditScriptData>
{
    NSArray *_data;
    NSString *_cachedStringValue;
}

+ (id)EditScriptDataWithArray:(id)arg1;
+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
@property(retain, nonatomic) NSString *cachedStringValue; // @synthesize cachedStringValue=_cachedStringValue;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(_Bool)arg2 fallsOnWordBoundary:(_Bool *)arg3;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)lengthOfItem:(long long)arg1;
- (id)stringValue;
- (id)stringAtIndex:(long long)arg1;
- (long long)length;
@property(readonly, copy) NSString *description;
- (id)initWithArray:(id)arg1;
- (id)initWithString:(id)arg1 chunkSize:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

