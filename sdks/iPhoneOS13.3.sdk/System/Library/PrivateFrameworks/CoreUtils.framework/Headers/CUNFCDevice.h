//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface CUNFCDevice : NSObject
{
    NSURL *_advertisedURI;
    NSUUID *_identifier;
}

@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSURL *advertisedURI; // @synthesize advertisedURI=_advertisedURI;
// - (void).cxx_destruct;

@end

