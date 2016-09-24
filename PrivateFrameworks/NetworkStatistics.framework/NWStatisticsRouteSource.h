/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWStatisticsRouteSource : NWStatisticsSource {
    struct nstat_route_descriptor { 
        unsigned int id; 
        unsigned int parent_id; 
        unsigned int gateway_id; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
            struct sockaddr { 
                unsigned char sa_len; 
                unsigned char sa_family; 
                BOOL sa_data[14]; 
            } sa; 
        } dst; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
            struct sockaddr { 
                unsigned char sa_len; 
                unsigned char sa_family; 
                BOOL sa_data[14]; 
            } sa; 
        } mask; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
            struct sockaddr { 
                unsigned char sa_len; 
                unsigned char sa_family; 
                BOOL sa_data[14]; 
            } sa; 
        } gateway; 
        unsigned int ifindex; 
        unsigned int flags; 
    }  _descriptor;
    NSData * _destination;
    NSData * _gateway;
    NSData * _mask;
}

@property (retain) NSData *destination;
@property (readonly) unsigned int flags;
@property (retain) NSData *gateway;
@property (readonly) unsigned int gatewayID;
@property (readonly) int interface;
@property (retain) NSData *mask;
@property (readonly) unsigned int parentID;
@property (readonly) unsigned int routeID;

- (void).cxx_destruct;
- (id)createCounts;
- (id)description;
- (id)destination;
- (unsigned int)flags;
- (id)gateway;
- (unsigned int)gatewayID;
- (BOOL)handleDescriptor:(void*)arg1 length:(unsigned long)arg2;
- (id)initWithManager:(id)arg1 destination:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 mask:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3 interface:(unsigned int)arg4;
- (int)interface;
- (id)mask;
- (unsigned int)parentID;
- (unsigned int)routeID;
- (void)setDestination:(id)arg1;
- (void)setGateway:(id)arg1;
- (void)setMask:(id)arg1;

@end