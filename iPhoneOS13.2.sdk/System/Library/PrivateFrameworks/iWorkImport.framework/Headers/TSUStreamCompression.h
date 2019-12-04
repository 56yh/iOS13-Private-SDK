//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUStreamCompression : NSObject
{
    int _status;
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } _stream;
    int _operation;
    id /* block */ _handler;
}

@property(copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
- (_Bool)processBytes:(char *)arg1 size:(unsigned long long)arg2 flags:(int)arg3;
- (_Bool)didFinishProcessing;
- (_Bool)processBytes:(char *)arg1 size:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithAlgorithm:(int)arg1 operation:(int)arg2;

@end

