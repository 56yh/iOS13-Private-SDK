//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

__attribute__((visibility("hidden")))
@interface _ACPluginDBBundle : NSObject <NSSecureCoding>
{
    NSString *mFullPath;
    double mInfoPlistModDate;
    double mRsrcModDate;
    struct AudioComponentVector mBundleComponentVector;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void)scanWithPriority:(int)arg1 loadable:(_Bool)arg2 infoPlistPath:(id)arg3;
- (void)loadAllComponents:(struct AudioComponentVector *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 infoPlistModDate:(double)arg2 rsrcModDate:(double)arg3;

@end

