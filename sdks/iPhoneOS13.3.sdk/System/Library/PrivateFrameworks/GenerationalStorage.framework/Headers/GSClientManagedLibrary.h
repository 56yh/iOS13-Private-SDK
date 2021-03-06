//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GenerationalStorage/GSLibraryProtocol-Protocol.h>

@class GSTemporaryStorage, NSString;
@protocol GSAdditionStoring;

__attribute__((visibility("hidden")))
@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol>
{
    GSTemporaryStorage *_ts;
}

// - (void).cxx_destruct;
- (BOOL)generationsRemove:(id)arg1 error:(id )arg2;
- (id)initWithURL:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSString *nameSpace;
@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage;

@end

