//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class CNAutocompleteSearchManager, NSNumber, NSString;

@interface CNAutocompleteSearchOperation : NSOperation
{
    CNAutocompleteSearchManager *_owner;
    NSNumber *_taskID;
    NSString *_text;
    NSString *_sendingAddress;
}

+ (id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3;
@property(readonly, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSNumber *taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) CNAutocompleteSearchManager *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) unsigned long long type;

@end

